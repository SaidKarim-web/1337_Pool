/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:11:07 by skarim            #+#    #+#             */
/*   Updated: 2023/08/27 20:00:27 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_issafe(int chess_board[10][10], int current_row, int current_column)
{
	int	i;
	int	j;

	i = 0;
	while (i < current_row)
	{
		if (chess_board[i][current_column] == 1)
			return (0);
		i++;
	}
	i = current_row - 1;
	j = current_column - 1;
	while (i >= 0 && j >= 0)
	{
		if (chess_board[i][j] == 1)
			return (0);
		i--;
		j--;
	}
	while (--current_row >= 0 && ++current_column < 10)
		if (chess_board[current_row][current_column] == 1)
			return (0);
	return (1);
}

void	ft_display(int chess_board[10][10])
{
	int	i;
	int	j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (chess_board[i][j] == 1)
				ft_putchar(j + '0');
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
}

int	ft_solve(int chess_board[10][10], int current_row)
{
	int	j;
	int	count;

	if (current_row == 10)
	{
		ft_display(chess_board);
		return (1);
	}
	j = 0;
	count = 0;
	while (j < 10)
	{
		if (ft_issafe(chess_board, current_row, j))
		{
			chess_board[current_row][j] = 1;
			count += ft_solve(chess_board, current_row + 1);
			chess_board[current_row][j] = 0;
		}
		j++;
	}
	return (count);
}

int	ft_ten_queens_puzzle(void)
{
	int	chess_board[10][10];
	int	i;
	int	j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			chess_board[i][j] = 0;
			j++;
		}
		i++;
	}
	return (ft_solve(chess_board, 0));
}
/*
int main(void)
{
	int i;

	i = ft_ten_queens_puzzle();
	return (0);
}*/
