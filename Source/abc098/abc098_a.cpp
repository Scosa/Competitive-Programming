if(B[i] & (1 << j) && B[i] & 1 << (j - 1)) Bbit[j][3]++;
      else if(B[i] & (1 << j) && !(B[i] & 1 << (j - 1))) Bbit[j][2]++;
      else if(!(B[i] & (1 << j)) && (B[i] & 1 << (j - 1))) Bbit[j][1]++;
      else if(!(B[i] & (1 << j)) && !(B[i] & 1 << (j - 1))) Bbit[j][0]++;