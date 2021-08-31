#include <iostream>
#include <time.h>
#include <bits/stdc++.h>
#include <chrono>

using namespace std;
void bubble_sort(int* array, int array_size);
void swap(int* a, int* b);
int main() {
    int n1, n2, n3, n4;
    n1 = 10000;
    n2 = 20000;
    n3 = 50000;
    n4 = 100000;
    int sa_a1[n1] ;
    int sa_a2[n2];
    int sa_a3[n3];
    int sa_a4[n4];
    int sd_a1[n1];
    int sd_a2[n2];
    int sd_a3[n3];
    int sd_a4[n4];
    int u_a1[n1];
    int u_a2[n2];
    int u_a3[n3];
    int u_a4[n4];
    int i; //looping variable
    //sorted and unsorted array
    for(i = 0; i < n1; i++){
        sa_a1[i] = i + 1;
        sd_a1[i] = n1 - i;
    }
    for(i = 0; i < n2; i++){
        sa_a2[i] = i + 1;
        sd_a2[i] = n2 - i;
    }
    for(i = 0; i < n3; i++){
        sa_a3[i] = i + 1;
        sd_a3[i] = n3 - i;
    }
    for(i = 0; i < n4; i++){
        sa_a4[i] = i + 1;
        sd_a4[i] = n4 - i;
    }
    
    //random array
    srand(time(0));
    i = 0; // resetting looping variable

    for(i = 0; i < n1; i++){
        u_a1[i] = (int)(((float)rand()/RAND_MAX)*50000);
    }
    for(i = 0; i < n2; i++){
        u_a2[i] =  (int)(((float)rand()/RAND_MAX)*50000);
    }
    for(i = 0; i < n3; i++){
        u_a3[i] = (int)(((float)rand()/RAND_MAX)*50000);
    }
    for(i = 0; i < n4; i++){
        u_a4[i] = (int)(((float)rand()/RAND_MAX)*50000);
    }
    
   cout << "bubble_sorted_asc_10000" << endl;
    auto t_start = std::chrono::high_resolution_clock::now();
    bubble_sort(sa_a1, n1);  
    auto t_end = std::chrono::high_resolution_clock::now();
    double elapsed_time_ms = std::chrono::duration<double, std::milli>(t_end-t_start).count();
    
    cout << elapsed_time_ms << endl;
    
    
    cout << "bubble_sorted_asc_20000" << endl;
    t_start = std::chrono::high_resolution_clock::now();
    bubble_sort(sa_a2, n2);  
    t_end = std::chrono::high_resolution_clock::now();
    elapsed_time_ms = std::chrono::duration<double, std::milli>(t_end-t_start).count();
    
    cout << elapsed_time_ms << endl;
    
    
    cout << "bubble_sorted_asc_50000" << endl;
    t_start = std::chrono::high_resolution_clock::now();
    bubble_sort(sa_a3, n3);  
    t_end = std::chrono::high_resolution_clock::now();
    elapsed_time_ms = std::chrono::duration<double, std::milli>(t_end-t_start).count();
    
    cout << elapsed_time_ms << endl;
    cout << endl;
    
    cout << "bubble_sorted_asc_100000" << endl;
    t_start = std::chrono::high_resolution_clock::now();
    bubble_sort(sa_a4, n4);  
    t_end = std::chrono::high_resolution_clock::now();
    elapsed_time_ms = std::chrono::duration<double, std::milli>(t_end-t_start).count();
    
    cout << elapsed_time_ms << endl;
    
    cout << "bubble_sorted_desc_10000" << endl;
    t_start = std::chrono::high_resolution_clock::now();	
    bubble_sort(sd_a1, n1);  
    t_end = std::chrono::high_resolution_clock::now();
    elapsed_time_ms = std::chrono::duration<double, std::milli>(t_end-t_start).count();
    cout << elapsed_time_ms << endl;
    
    cout << "bubble_sorted_desc_20000" << endl;
    t_start = std::chrono::high_resolution_clock::now();	
    bubble_sort(sd_a2, n2);  
    t_end = std::chrono::high_resolution_clock::now();
    elapsed_time_ms = std::chrono::duration<double, std::milli>(t_end-t_start).count();
    cout << elapsed_time_ms << endl;
    
    cout << "bubble_sorted_desc_50000" << endl;
    t_start = std::chrono::high_resolution_clock::now();	
    bubble_sort(sd_a3, n3);  
    t_end = std::chrono::high_resolution_clock::now();
    elapsed_time_ms = std::chrono::duration<double, std::milli>(t_end-t_start).count();
    cout << elapsed_time_ms << endl;
    
    cout << "bubble_sorted_desc_100000" << endl;
    t_start = std::chrono::high_resolution_clock::now();	
    bubble_sort(sd_a4, n4);  
    t_end = std::chrono::high_resolution_clock::now();
    elapsed_time_ms = std::chrono::duration<double, std::milli>(t_end-t_start).count();
    cout << elapsed_time_ms << endl;
    
    cout << "bubble_sorted_random_10000" << endl;
    t_start = std::chrono::high_resolution_clock::now();	
    bubble_sort(u_a1, n1);  
    t_end = std::chrono::high_resolution_clock::now();
    elapsed_time_ms = std::chrono::duration<double, std::milli>(t_end-t_start).count();
    cout << elapsed_time_ms << endl;
    
    cout << "bubble_sorted_random_20000" << endl;
    t_start = std::chrono::high_resolution_clock::now();	
    bubble_sort(u_a2, n2);  
    t_end = std::chrono::high_resolution_clock::now();
    elapsed_time_ms = std::chrono::duration<double, std::milli>(t_end-t_start).count();
    cout << elapsed_time_ms << endl;
    
    cout << "bubble_sorted_random_50000" << endl;
    t_start = std::chrono::high_resolution_clock::now();	
    bubble_sort(u_a3, n3);  
    t_end = std::chrono::high_resolution_clock::now();
    elapsed_time_ms = std::chrono::duration<double, std::milli>(t_end-t_start).count();
    cout << elapsed_time_ms << endl;
    
    
    cout << "bubble_sorted_random_100000" << endl;
    t_start = std::chrono::high_resolution_clock::now();	
    bubble_sort(u_a4, n4);  
    t_end = std::chrono::high_resolution_clock::now();
    elapsed_time_ms = std::chrono::duration<double, std::milli>(t_end-t_start).count();
    cout << elapsed_time_ms << endl;
    
    
}

void bubble_sort (int* a, int array_size){
    int i,j, flag = 0;
    for(i = array_size; i > 0; i--){
        for(j = 0; j < i-1; j++){
            if(a[j] > a[j+1]){
            	flag = 1;
                swap(&(a[j]), &(a[j+1]));
            }
        }
        if(flag == 0)
        	return;
    }    
} 
    
    
void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
        
	

