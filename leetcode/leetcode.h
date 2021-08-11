#pragma once

#include <string>
#include <vector>

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {
    }
    ListNode(int v) : val(v), next(nullptr) {
    }
    ListNode(int v, ListNode* nt) : val(v), next(nt) {
    }
};

class LeetCode {
public:
    //wildcard test, https://leetcode-cn.com/problems/wildcard-matching/
    bool is_match(std::string& s, std::string& p);

    // https://leetcode-cn.com/problems/merge-k-sorted-lists/
    ListNode* merge_lists(std::vector<ListNode*>& lists, int mode);
};