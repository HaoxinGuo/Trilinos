/*****************************************************************************
 * CVS File Information :
 *    $RCSfile$
 *    $Author$
 *    $Date$
 *    $Revision$
 ****************************************************************************/

#ifndef __REFTREE_CONST_H
#define __REFTREE_CONST_H

/* Prototypes */

extern int Zoltan_Reftree_Set_Param(char *name, char *val);
extern void Zoltan_Reftree_Free_Structure(LB *lb);
extern void Zoltan_Reftree_Get_Child_Order(LB *lb, int *order, int *ierr); /* TEMP child_order */

#endif /* __REFTREE_CONST_H */
