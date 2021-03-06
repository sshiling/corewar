/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omykolai <omykolai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/27 13:34:36 by omykolai          #+#    #+#             */
/*   Updated: 2018/04/27 15:23:23 by omykolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corewar.h"

void			op_add(t_vm *vm, t_process *p, t_op *op)
{
	(void)vm;
	p->r[op->args[2]] = p->r[op->args[0]] + p->r[op->args[1]];
	p->carry = !p->r[op->args[2]];
}
