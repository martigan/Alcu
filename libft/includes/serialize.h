










#ifndef			SERIALIZE_H
# define		SERIALIZE_H

typedef struct		s_xml
{
	char			*data;
	struct s_xml	*beg;
	struct s_xml	*next;
}					t_xml;

t_xml	*xml_deserialize(char *file);
void	*xml_get_value(char *entry, char *var, int type, t_xml *xml);

t_xml	*get_entry_beg(char *entry, t_xml *xml);
void	*get_var_value(char *var, int type, t_xml *entry);

#endif			/* !SERIALIZE_H */
