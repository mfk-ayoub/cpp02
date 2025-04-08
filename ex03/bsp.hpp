/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:37:39 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/04/08 15:41:39 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSP_HPP
#define BSP_HPP

#include "Point.hpp"

float AreaOfTriangle(Point const a, Point const b, Point const c);
bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
