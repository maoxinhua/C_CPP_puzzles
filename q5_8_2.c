#include <stdio.h>

int cal_score(int  score[], int judge_type[], int n)
{
  /* success */
  int result = 0;
  int loop_count = 0;
  int expert = 0;
  int expert_num = 0;
  int average = 0;
  int average_num = 0;

  int average_score, expert_score;

  if(n <= 0)
  {
    result = -1;
    return result;
  }
  
  while(loop_count < n)
  {
    switch(judge_type[loop_count])
    {
    case 1:
      expert += score[loop_count];
      expert_num ++;
      break;
      
    case 2:
      average += score[loop_count];
      average_num ++;
      break;
      
    default:
      result = -1;
      printf("invalid input arguments for judge_type[%d] = %d \n", loop_count, judge_type[loop_count]);
      return result;

    }
    loop_count++;
  }

  expert_score = (int)(expert_num == 0 ? 0 : expert / expert_num);
  printf("expert score=%d\n", expert_score);

  average_score = (int)(average_num == 0 ? 0 : average/average_num);
  printf("average score=%d\n", average_score);

  printf("total score=%d\n", (int)(0.6*expert_score + 0.4*average_score));

}

int main(void)
{
  int score[] = {8, 7, 3, 2, 5, 6, 9, 1};
  int judge_type[] = {1, 1, 2, 2, 1, 1, 2, 2};

  return  cal_score(score, judge_type, 8);

}
  
