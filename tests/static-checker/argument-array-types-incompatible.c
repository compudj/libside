/*
 * SPDX-FileCopyrightText: 2024 Olivier Dion <odion@efficios.com>
 *
 * SPDX-License-Identifier: MIT
 */

int main(void)
{
	side_arg_define_array(my_array, side_arg_list(side_arg_u32(1), side_arg_u64(2)));

	return 0;
}
