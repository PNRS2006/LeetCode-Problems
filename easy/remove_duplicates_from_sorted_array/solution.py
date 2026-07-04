class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        u = list(dict.fromkeys(nums))
        for i in range(len(u)):
            nums[i] = u[i]

        return len(u)