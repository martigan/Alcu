/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   powf.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaspail <mgaspail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 20:03:11 by mgaspail          #+#    #+#             */
/*   Updated: 2014/03/09 23:41:15 by stherman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		POWF_H
# define	POWF_H

# define	USAGE	("\033[38;5;51mUsage:\033[0m ./puissance4 <col> <ln>\n")
# define	ARG_ERR	("\033[31mError:\033[0m Wrong board size gived X(\n")
# define	XY_ERR	("\033[31mError:\033[0m Wrong coordinates given X(\n")
# define	NO_SPC	("\033[38;5;51mEnd:\033[0m Not enought space left :S\n")

# define	BG		('.')
# define	P1		('0')
# define	AI		('X')

# define	COL_BG	("\033[38;5;26m")
# define	COL_P1	("\033[38;5;220m")
# define	COL_AI	("\033[38;5;196m")
# define	MARK	("\033[38;5;45m")
# define	WIN		("\033[38;5;46m")
# define	COL_RE	("\033[0m")

# define	PROMPT	("\033[38;5;34mYour turn: \033[0m")
# define	AI_TXT	("\033[38;5;34mAI turn:\n\033[0m")
# define	DRUNK	("\033[38;5;34mDrunk turn: \n\033[0m")

# define	MALLOC	("Memory error\n")

typedef struct		s_data
{
	int				ln;
	int				col;
	int				turn;
	int				winner;
	int				nmatch;
	char			current;
	char			*board;
	int				(*p1)(struct s_data *);
	int				(*p2)(struct s_data *);
	int				lpp[2];
	int				lpa[2];
	int				depth;
}					t_data;

int			gravity(int x, int y, t_data *powf);
int			arg_error(int ac, char **av);
void		init_powf(int ln, int col, t_data *powf);
void		display_board(t_data *powf);
int			insert_piece(int x, char p, t_data *powf);
int			start_the_game(t_data *powf);
void		check_win(int last_x, int last_y, t_data *powf);
void		display_winner(t_data *powf);
int			ai_game(t_data *powf);
int			ai_checks(t_data *powf, int x, char c);
int			player_turn(t_data *powf);
int			ai_turn(t_data *powf);
int			ai_turn_drunk(t_data *powf);
int			ok(char p, int x, int y, t_data *powf);
void		get_options(int ac, char **av, t_data *powf);

#endif		/* !POWF_H */
