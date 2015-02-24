/* -*- c++ -*- */
/* Copyright 2015 Ettus Research
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * gr-ettus is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with gr-ettus; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifndef INCLUDED_ETTUS_RFNOC_WINDOW_CCI_IMPL_H
#define INCLUDED_ETTUS_RFNOC_WINDOW_CCI_IMPL_H

#include <ettus/rfnoc_window_cci.h>
#include <ettus/rfnoc_common.h>

namespace gr {
  namespace ettus {

    class rfnoc_window_cci_impl : public rfnoc_window_cci
    {
     public:
      rfnoc_window_cci_impl(
          const std::vector<int> &coeffs,
          const device3::sptr &dev,
          const int block_select,
          const int device_select
      );
      ~rfnoc_window_cci_impl();

      void set_window(const std::vector<int> &coeff);
     private:
      size_t d_window_size;
      bool d_setup; //!< True when block is set up

      // RFNoC-specifics:
      GR_RFNOC_BLOCK_IMPL_H()
    }; // class rfnoc_window_cci_impl

  } // namespace ettus
} // namespace gr

#endif /* INCLUDED_ETTUS_RFNOC_WINDOW_CCI_IMPL_H */

