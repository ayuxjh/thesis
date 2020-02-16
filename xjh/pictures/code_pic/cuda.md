
```python
//核函数定义
__global__ void computeLUFactors_4x4_kernel()
{
        const int nWarps = CtaSize / 32; // Number of  warps per Block

        const int warpId = utils::warp_id();
        const int laneId = utils::lane_id();

        // Lane ID in the 2 16-wide segments.
        const int lane_id_div_16 = laneId / 16;
        const int lane_id_mod_16 = laneId % 16;
        
        //申请共享内存
        __shared__ volatile double s_C_mtx[nWarps][32];

        //......并行处理块ILU分解......

}
 
//核函数启动
    computeLUFactors_4x4_kernel<<< GridSize, CtaSize>>> ()