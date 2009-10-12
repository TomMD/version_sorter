/*
 *  version_sorter.h
 *  version_sorter
 *
 *  Created by K. Adam Christensen on 10/10/09.
 *  Copyright 2009. All rights reserved.
 *
 */

#ifndef _VERSION_SORTER_H
#define _VERSION_SORTER_H

#define DIE(msg) \
    fprintf(stderr, msg);\
    exit(EXIT_FAILURE);\

typedef struct _VersionSortingItem {
    struct _VersionPiece *head;
    struct _VersionPiece *tail;
    int node_len;
    int widest_len;
    char *normalized;
    const char *original;
    size_t original_len;
} VersionSortingItem;

typedef struct _VersionPiece {
    char *str;
    int len;
    struct _VersionPiece *next;
} VersionPiece;

extern void version_sorter_sort(char **, size_t);

#endif /* _VERSION_SORTER_H */