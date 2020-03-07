void convert_to_octal(int number) { int j,i,array[100];
    i=0;
    while(number>0)
    array[i] = number%8;
    number=number/8;
    i++;

    for(j=i-1;j>=0;j--) {

        printf("%d",array[j]);
    }








}
