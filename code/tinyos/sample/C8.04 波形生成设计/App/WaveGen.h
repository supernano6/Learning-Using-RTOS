/**
 * @brief 波形生成器实现
 * @details
 * @author 01课堂 李述铜 http://01ketang.cc
 * @date 2017-06-01
 * @version 1.0
 * @copyright 版权所有，禁止用于商业用途
 */
#ifndef WAVEGEN_H
#define WAVEGEN_H

typedef enum {
    WaveSquare,
}WaveType;

void WaveGenInit (void);
void WaveSelectType (WaveType type);
void WaveSquareSet ();

#endif //WAVEGEN_H
