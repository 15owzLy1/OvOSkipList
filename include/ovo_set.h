//
// Created by Lddyss on 2025/1/30.
//

// include/ovo_set.h
#ifndef OVO_SET_H
#define OVO_SET_H
#include <cstdio>
using std::size_t;

template <typename Key, class Comparator>
class OvOSet {
public:
    virtual ~OvOSet() = default;
    virtual bool Insert(const Key& key) = 0;
    virtual bool Remove(const Key& key) = 0;
    virtual bool Contains(const Key& key) const = 0;
};

#endif // OVO_SET_H
