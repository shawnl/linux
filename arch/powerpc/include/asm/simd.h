/* SPDX-License-Identifier: GPL-2.0+ */

/*
 * may_use_simd - whether it is allowable at this time to issue SIMD
 *                instructions or access the SIMD register file
 *
 * It's always ok in process context (ie "not interrupt")
 * but it is sometimes ok even from an irq.
 */
static __must_check inline bool may_use_simd(void)
{
	return irq_simd_usable();
}
