#include<Stdio.h>
int main()
{
    float cost,selling_price,profit,loss;
    printf("Ente the cost of this product");
    scanf("%f",&cost);
    printf("Enter the selling price");
    scanf("%f",&selling_price);
    if (selling_price > cost)
    {
        profit = selling_price - cost ;
        printf("seller has made profit of %f",profit);
    }
    if(selling_price < cost)
    {
        loss = cost - selling_price ;
        printf("seller made loss of %f",loss);

    }
    if (cost == selling_price)
    {
        printf("no loss no profit");
    }


    return 0;
}