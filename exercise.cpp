//creatng a class addition
class addition{
    public:
    int a=22;
    int b=30;
    int c=50;
    int product;
    int product(){
        product=(a*b*c);
        return product;
    };
    int main (){
        product product1;
        int a,b,c,product;
        product1.a=22;
        product1.b=30;
        product1.c=50;
        product=product1.product();{
            cout<<"the product is:"<<product<<endl;
        }
            return0;
        }