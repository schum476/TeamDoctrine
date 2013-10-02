#include <stdlib.h>
#include <stdarg.h>
#include <stdbool.h>
#include "mergesort.h"


void mergesort(int size, int values[]) {

  
  void mergeRec(int values[], int start, int mid, int end) {
    int ranSize, first, second, copy, i;
    ranSize = end - start;
    int destination[ranSize];
    first = start;
    second = mid;
    copy = 0;
    while (first < mid && second < end) {
      if (values[first] < values[second]){
	destination[copy] = values[first];
	first++;
      } else {
	destination[copy] = values[second];
	second++;
      }
      copy++;
    }
    while (first < mid) {
      destination[copy] = values[first];
      copy++;
      first++;
    }
    while (second < end) {
      destination[copy] = values[second];
      copy++;
      second++;
    }
    for (i = 0; i < ranSize; ++i) {
      values[i + start] = destination[i];
    }
  }

  void mergeSortRec(int values[], int start, int end) {
    int ranSize;
    ranSize = end - start;
    if(ranSize >= 2) {
      int mid = (start + end) / 2;
      mergeSortRec(values, start, mid);
      mergeSortRec(values, mid, end);
      mergeRec(values, start, mid, end);
    }
  }

  mergeSortRec(values, 0, size);
}

