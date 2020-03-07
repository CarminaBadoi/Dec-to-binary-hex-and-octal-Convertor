void convert_to_octal(int number) { int j,i,array[100];
    i=0;
    while(number>0) {

    int remainder = number%8;
    array[i] =  remainder;
    number=number/8;
    i++;}

    printf("Octal: ");

    for(j=i-1;j>=0;j--) {

        printf("%d",array[j]);
    }}
