void convert_to_binary(int number) { int i,j,array[100];
i=0;
while(number > 0) {
        int remainder =number%2;
        array[i] = remainder;
        number=number/2;
        i++;


}

 printf("Binary:");


for(j=i-1;j>=0;j--)
{
    printf("%d",array[j]);




}


printf("\n");
}
