#include<stdio.h>

int main() {
  int tc;
  scanf("%d", &tc);
  int pvt[3];
  int r = 0;
  while(tc--) {
	scanf("%d %d %d", &pvt[0], &pvt[1], &pvt[2]);
	r += (pvt[0]+pvt[1]+pvt[2]>=2);
  }
  printf("%d \n", r);
}
