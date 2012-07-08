#ifndef PROPERTY_VISITOR_HPP
#define PROPERTY_VISITOR_HPP
/*! \file	propertyvisitor.hpp
 * Copyright 2012. See COPYING for details.
 *
 * To be able to set and get the values contained within a property, when only
 * an AbstractProperty* is available, the visitor pattern is used to perform
 * a double dispatch.
 */

/*! The base class for all property visitors. This must be the first class
 * inherited from when creating a property visitor.
 */
struct PropertyVisitorBase
{
	virtual ~PropertyVisitorBase() {}
};

/*! Template visitor class which is able to receive a visit from a value.
 * Inheriters of this class will need to implement the visit function for
 * the encapsulated type.
 */
template <typename EncapsulatedType>
struct PropertyVisitor
{
	virtual bool visit(EncapsulatedType& val) = 0;
};

#endif
