//
//  MergeList.h
//  LeetCodeQuestion
//
//  Created by 工作 on 2020/2/7.
//  Copyright © 2020 navinfo. All rights reserved.
//

#ifndef MergeList_h
#define MergeList_h

#include <stdio.h>

/*
 每日一题第三题
 将两个有序链表合并为一个新的有序链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。
 
 示例：
 
 输入：1->2->4, 1->3->4
 输出：1->1->2->3->4->4
 
 来源：力扣（LeetCode）
 链接：https://leetcode-cn.com/problems/merge-two-sorted-lists
 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 */

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2);

#endif /* MergeList_h */
