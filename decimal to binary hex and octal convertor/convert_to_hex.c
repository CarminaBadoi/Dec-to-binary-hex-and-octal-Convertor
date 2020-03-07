

void convert_to_hex(int number) { int i,j ;
                                 char array[100];

i=0;
while(number>0){

    int remainder = 0 ;
    remainder = number%16;

    if(remainder< 10)  {
                        array[i++] = 48 + remainder ;

                      }
    else              {
                       array[i++]= remainder +55;

                      }

    number = number/16;




}
printf("Hexadecimal:");

for(j=i-1;j>=0;j--) {

    printf("%c",array[j]);

}



printf("\n");



}
