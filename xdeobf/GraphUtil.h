#pragma once

void delMBlockEdge(mblock_t *src, mblock_t *dst);
void addMBlockEdge(mblock_t *src, mblock_t *dst);
void delMBlockAllOutgoing(mblock_t *blk);
mblock_t *copyMBlockEmpty(mblock_t *src, int insertBefore);
mblock_t *copyMBlock(mblock_t *src, int insertBefore);
mblock_t *splitMBlock(mblock_t *src, minsn_t *splitInsn);
mblock_t *skipGotos(mblock_t *blk);
void forceMBlockGoto(mblock_t *src, mblock_t *dst);
void setMBlockJcc(mblock_t *src, mblock_t *dst);
bool insertGotoMBlock(mblock_t *after, mblock_t *dst);
