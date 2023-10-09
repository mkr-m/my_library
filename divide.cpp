  int i = 0;
  while(i < N){
    if(h[i] == 0) ++i; // 0なら何もせずに次に進む
    else{
      ++res; // 区間の始まり
      while(i < N && h[i] > 0){
        ++i; // 区間の終わりまで一気に
      }
    }
  }