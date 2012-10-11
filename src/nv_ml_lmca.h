/*
 * This file is part of libnv.
 *
 * Copyright (C) 2008-2012 nagadomi@nurs.or.jp
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License,
 * or any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef NV_ML_LMCA_H
#define NV_ML_LMCA_H

void nv_lmca_progress(int onoff);
void nv_lmca(nv_matrix_t *ldm,
			 const nv_matrix_t *data,
			 const nv_matrix_t *labels,
			 int nk, int mk, float margin, float pull_ratio, float delta,
			 int max_epoch);

void nv_lmca_projection(nv_matrix_t *v1, int v1_j,
						const nv_matrix_t *ldm,
						const nv_matrix_t *v2, int v2_j);

#endif
