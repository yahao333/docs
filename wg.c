
/*
 * 是否开启超频
 * 
 * 返回: 
 *  0, 取消超频
 *  1, 开启超频
 * 
 * 通过不断轮询，检测设备是否发送超频命令上来
*/
Int32 IsOverLock(void);

/*
 * 设置超频结果
 * 
 *  result 为 0 代表超频成功
 *  result 为 1 代表超频失败     
 * 
*/
void OverLockResponse(Int32 result);

/*
 * 设置超频状态
 *  
 *  state 为 0 表示普通模式
 *  state 为 1 表示超频模式 
*/
void SetOverLockState(Int32 state);

/*
 * 设置频率
 *
 *  fq: 当前频率值， 单位为 MHz
 * 
 * 例如 4.8Mhz , fq = 4.8
*/
void SetFq(Float32 fq);

/*
 * 设置PC工作模式
 *  
 *  mode: 
 *  1 普通模式
 *  2 游戏模式
 *  3 待机模式
 *  4 其他模式
*/
void SetMode(Int32 mode);