{
     M=12*yuexin;
     return  M;
 }
 int NIANXIN()
 {
     X=1.1*M;
     return X;
 }
 void displaymessage1()
 {
     cout<<getxing()<<getming()<<"����нΪ "<<nianxin();
 }
 void displaymessage2()
 {
     cout<<"����10%����нΪ"<<NIANXIN();
 }
private:

        string ming;
        string xing;
        int yuexin;
        int M;
        int X;

   };
