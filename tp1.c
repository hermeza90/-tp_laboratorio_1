int suma(int op1, int op2){
    int result;
    result=op1+op2;
    return result;
}

int resta(int op1, int op2){
    int result;
    result=op1-op2;
    return result;
}

int multiplica(int op1, int op2){
    int result;
    result=op1*op2;
    return result;
}

int divide(int op1, int op2){
    int result;
    if(op2 == 0){
        return 0;
    }
    result=op1/op2;
    return result;
}

int factorialOp1(int op1){
    int result=1,i=0;
    for(i=op1;i>0;i--){
        result=result*i;
    }
    return result;
}
int factorialOp2(int op2){
    int result=1,i=0;
    for(i=op2;i>0;i--){
        result=result*i;
    }
    return result;
}
