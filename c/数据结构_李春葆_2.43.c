/*˳���L��ɾ���ظ�Ԫ�أ���ʹʣ��Ԫ����Դ��򱣳ֲ��䣬�ռ临�Ӷ�O(1)*/
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
