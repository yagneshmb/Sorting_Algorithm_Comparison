#include <iostream>
#include <time.h>
#include <bits/stdc++.h>
#include <chrono>

using namespace std;
void quick_sort(int* array, int start_index, int end_index);
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
   
   cout << "quick_sorted_asc_10000" << endl;
    auto t_start = std::chrono::high_resolution_clock::now();
    quick_sort(sa_a1, 0, n1 - 1);  
    auto t_end = std::chrono::high_resolution_clock::now();
    double elapsed_time_ms = std::chrono::duration<double, std::milli>(t_end-t_start).count();
    
    cout << elapsed_time_ms << endl;
    
    
    cout << "quick_sorted_asc_20000" << endl;
    t_start = std::chrono::high_resolution_clock::now();
    quick_sort(sa_a2, 0, n2 - 1);  
    t_end = std::chrono::high_resolution_clock::now();
    elapsed_time_ms = std::chrono::duration<double, std::milli>(t_end-t_start).count();
    
    cout << elapsed_time_ms << endl;
    
    
    cout << "quick_sorted_asc_50000" << endl;
    t_start = std::chrono::high_resolution_clock::now();
    quick_sort(sa_a3, 0, n3 - 1);  
    t_end = std::chrono::high_resolution_clock::now();
    elapsed_time_ms = std::chrono::duration<double, std::milli>(t_end-t_start).count();
    
    cout << elapsed_time_ms << endl;
    cout << endl;
    
    cout << "quick_sorted_asc_100000" << endl;
    t_start = std::chrono::high_resolution_clock::now();
    quick_sort(sa_a4, 0, n4 - 1);  
    t_end = std::chrono::high_resolution_clock::now();
    elapsed_time_ms = std::chrono::duration<double, std::milli>(t_end-t_start).count();
    
    cout << elapsed_time_ms << endl;
    
    cout << "quick_sorted_desc_10000" << endl;
    t_start = std::chrono::high_resolution_clock::now();	
    quick_sort(sd_a1, 0, n1 - 1);  
    t_end = std::chrono::high_resolution_clock::now();
    elapsed_time_ms = std::chrono::duration<double, std::milli>(t_end-t_start).count();
    cout << elapsed_time_ms << endl;
    
    cout << "quick_sorted_desc_20000" << endl;
    t_start = std::chrono::high_resolution_clock::now();	
    quick_sort(sd_a2, 0, n2 - 1);  
    t_end = std::chrono::high_resolution_clock::now();
    elapsed_time_ms = std::chrono::duration<double, std::milli>(t_end-t_start).count();
    cout << elapsed_time_ms << endl;
    
    cout << "quick_sorted_desc_50000" << endl;
    t_start = std::chrono::high_resolution_clock::now();	
    quick_sort(sd_a3, 0, n3 - 1);  
    t_end = std::chrono::high_resolution_clock::now();
    elapsed_time_ms = std::chrono::duration<double, std::milli>(t_end-t_start).count();
    cout << elapsed_time_ms << endl;
    
    cout << "quick_sorted_desc_100000" << endl;
    t_start = std::chrono::high_resolution_clock::now();	
    quick_sort(sd_a4, 0, n4);  
    t_end = std::chrono::high_resolution_clock::now();
    elapsed_time_ms = std::chrono::duration<double, std::milli>(t_end-t_start).count();
    cout << elapsed_time_ms << endl;
    
    cout << "quick_sorted_random_10000" << endl;
    t_start = std::chrono::high_resolution_clock::now();	
    quick_sort(u_a1, 0, n1);  
    t_end = std::chrono::high_resolution_clock::now();
    elapsed_time_ms = std::chrono::duration<double, std::milli>(t_end-t_start).count();
    cout << elapsed_time_ms << endl;
    
    cout << "quick_sorted_random_20000" << endl;
    t_start = std::chrono::high_resolution_clock::now();	
    quick_sort(u_a2, 0, n2);  
    t_end = std::chrono::high_resolution_clock::now();
    elapsed_time_ms = std::chrono::duration<double, std::milli>(t_end-t_start).count();
    cout << elapsed_time_ms << endl;
    
    cout << "quick_sorted_random_50000" << endl;
    t_start = std::chrono::high_resolution_clock::now();	
    quick_sort(u_a3, 0, n3);  
    t_end = std::chrono::high_resolution_clock::now();
    elapsed_time_ms = std::chrono::duration<double, std::milli>(t_end-t_start).count();
    cout << elapsed_time_ms << endl;
 
    
    cout << "quick_sorted_random_100000" << endl;
    t_start = std::chrono::high_resolution_clock::now();	
    quick_sort(u_a4, 0, n4);  
    t_end = std::chrono::high_resolution_clock::now();
    elapsed_time_ms = std::chrono::duration<double, std::milli>(t_end-t_start).count();
    cout << elapsed_time_ms << endl;
    
    
  
  
  
}

void quick_sort (int* a, int start_index, int end_index){
//cout << start_index << " " << end_index << " " << endl;
    // if only two elements left
    int pivot, partition_index, seen_index, i;
    if(end_index - start_index <= 0)
    	return;
    if((end_index - start_index + 1) == 2){
    	if( a[start_index] >= a[end_index] ){
    		swap( (&(a[start_index])), (&(a[end_index])) ); 
    	}
	return;
    }
    //partition
    else{
    	//cout << "entered partition algorithm" << endl;
    	pivot = a[start_index];
    	
    	partition_index = start_index + 1;
    	seen_index = start_index + 1;
    	for(seen_index = partition_index; seen_index <= end_index; seen_index++){
    		if(a[seen_index] <= pivot){
    			swap( (&(a[seen_index])), (&(a[partition_index])) );
    			partition_index++;
    		}
    	}
    	swap( (&(a[start_index])), (&(a[partition_index - 1])) );
    	
  //  	for(i = 0; i < 10; i++){
   // 	cout << a[i] << " " ;
  //}
  //  cout << endl;
//    }
   
   quick_sort(a, start_index, (partition_index - 2));    
   quick_sort(a, partition_index, end_index);  
} 
    }
    
void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
        
	

