import sys
def buscaNaVe(nums, target):

    if target in nums:
        return nums.index(target)
    else:
        nums.append(target)
        nums.sort()
        print(nums)
        return nums.index(target)


if __name__ == "__main__":
    input = sys.stdin.readline
    nums = list(map(int, input().split()))
    target = int(input())
    k = buscaNaVe(nums, target)

    print(k)
