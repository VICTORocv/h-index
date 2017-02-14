# h-index
自己写的cpp程序，但是太low了，leetcode上超时了，后来看到solutions里的“My easy
solution”豁然开朗，原来可以先排序再处理数组

 public int hIndex(int[] citations) {
   Arrays.sort(citations);
   int len=citations.length;
    for(int i=0;i<len;i++){
        if(citations[i]>=len-i) return len-i;
        
    }
    return 0;
}（java版）
