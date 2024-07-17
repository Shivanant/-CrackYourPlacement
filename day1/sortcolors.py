def sortColors(nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        sp=0
        mid=0
        ed=len(nums)-1
        while mid<=ed:
            if nums[mid]==0:
                temp=nums[mid]
                nums[mid]=nums[sp]
                nums[sp]=temp
                sp+=1
                mid+=1
            elif nums[mid]==1:
                mid+=1
            else:
                temp =nums[mid]
                nums[mid]=nums[ed]
                nums[ed]=temp
                ed-=1

nums=[1,0,2,0,0,1,2]
sortColors(nums)
print(nums)