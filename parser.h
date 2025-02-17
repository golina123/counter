struct parser;
struct parser * parser_create();
char *parser_getword(struct parser *p, const char *fi);
void parser_delete();
