### 冒泡排序

**1.** 什么是冒泡排序

* 重复走访需要排序的元素列，依次比较两个相邻的元素，如果他们的顺序错误就把他们交换过来。

**2.** 性能

* 若元素初始顺序就是正确的，那么时间复杂度为O(n)。但是如果其初始顺序刚好是相反的，那么时间复杂度将为O(n*2),冒泡排序总的平均时间复杂度为O(n*2平方)。

**3.** 稳定性

* 因为冒泡排序是一直在和相邻的元素进行比较，只有满足条件才换，相等的情况不会交换，所以相同的元素，排序前和排序后的顺序不会改变，故其为稳定排序。