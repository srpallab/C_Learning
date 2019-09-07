#include <stdio.h>

int main()
{
  int T, r1, r2, b;
  scanf("%d", &T);
  while (T--) {
    scanf("%d %d %d", &r1, &r2, &b);
    float target, balls, run_required, current_run_rate, required_run_rate;
    target = r1 + 1;
    run_required = target - r2;
    balls = (300 - b);
    current_run_rate = (r2/balls) * 6;
    if(r2 > r1){
      required_run_rate = 0.00;
    }else{
      required_run_rate = (run_required/b) * 6;
    }
    printf("%.2f %.2f\n", current_run_rate, required_run_rate);
    
  }
  return 0;
}
