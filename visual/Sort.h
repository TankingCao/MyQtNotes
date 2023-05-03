
#ifndef BUBBLESORT_H
#define BUBBLESORT_H


//参数是数组及其长度
void bubbleSort(int arr[],int len){
    for(int i=0;i<len-1;i++){
        for(int j=0;j<i-len-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

#endif // BUBBLESORT_H
