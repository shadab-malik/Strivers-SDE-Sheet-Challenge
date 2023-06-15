#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	int ele,val=0;
	for(int i=0; i<n; i++){
		if(val==0) ele = arr[i];
		val+= ele==arr[i]? 1:-1;
	}
  
	val=0;
	for(int i=0; i<n; i++){
		if(ele==arr[i]) val++;
	}
	if(val>n/2) return ele;
	else return -1;
}
