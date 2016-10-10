/*顺序表L中删除重复元素，并使剩余元素相对次序保持不变，空间复杂度O(1)*/
typedef struct {
    elemtype data[maxsize];
    int len;
}sqlist;
void delsame(Sqlist &L)
{
    int i,j,k;
    if (L.len > 0)
    {
        j = 0;
        for (i = 1;i < L.len;i++)
        {
            while (k <= j && L.data[k] !=L.data[j])
                k++;
            if (k==j+1)
                L.data[j++] = L.data[i];
        }
    }
    L.len = j;
}
