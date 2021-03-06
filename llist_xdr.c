/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "llist.h"

bool_t
xdr_color(xdrs, objp)
	XDR *xdrs;
	color *objp;
{

	if (!xdr_enum(xdrs, (enum_t *)objp))
		return (FALSE);
	return (TRUE);
}

bool_t
xdr_list(xdrs, objp)
	XDR *xdrs;
	list *objp;
{

	if (!xdr_string(xdrs, &objp->data, ~0))
		return (FALSE);
	if (!xdr_int(xdrs, &objp->key))
		return (FALSE);
	if (!xdr_color(xdrs, &objp->col))
		return (FALSE);
	if (!xdr_pointer(xdrs, (char **)&objp->next, sizeof(list), (xdrproc_t)xdr_list))
		return (FALSE);
	return (TRUE);
}
