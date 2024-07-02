class Solution:
    def kClosest(self, points: List[List[int]], k: int) -> List[List[int]]:
        minheap=[]
        res=[]
        for x,y in points:
            distance=x**2+y**2
            minheap.append([distance,x,y])
        heapq.heapify(minheap)  #heapification
        while k>0:
            distance,x,y=heapq.heappop(minheap)  #extracting the heap so that we can add only the x and y coordinates to the res
            res.append([x,y])
            k-=1
        return res
