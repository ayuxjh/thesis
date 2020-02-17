
```python
  1         const int idx_i = lane_id_mod_16 / 4;
  2         const int idx_j = lane_id_mod_16 % 4;
  3 
  4         double tmp = 0.0;
  5 
  6         for ( int m = 0 ; m < 4 ; ++m )
  7         {
  8                 tmp += s_C_mtx[warpId][4 * idx_i + m] * s_C_mtx[warpId][16 + 4 * m + idx_j];
  9         }
