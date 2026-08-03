# include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int solved_count = 0;
    for (int i = 0; i < n; i++)
    {
        int petya, vasya, tonya;
        scanf("%d %d %d", &petya, &vasya, &tonya);
        if (petya + vasya + tonya >= 2)
        {
            solved_count++;
        }
        
    }
    printf("%d\n", solved_count);
    return 0;    
}