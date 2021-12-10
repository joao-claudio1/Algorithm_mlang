class Solution(object):
    def doisSoma(self, nums, target):
  
        lista = []
        for i in range(len(nums)):
            k = target - nums[i]
            if k in nums and nums.index(k) != i:
                lista.append(i)
                lista.append(nums.index(k))
                return lista