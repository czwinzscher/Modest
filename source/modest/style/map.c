/*
 Copyright (C) 2016 Alexander Borisov
 
 This library is free software; you can redistribute it and/or
 modify it under the terms of the GNU Lesser General Public
 License as published by the Free Software Foundation; either
 version 2.1 of the License, or (at your option) any later version.
 
 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 Lesser General Public License for more details.
 
 You should have received a copy of the GNU Lesser General Public
 License along with this library; if not, write to the Free Software
 Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 
 Author: lex.borisov@gmail.com (Alexander Borisov)
*/

#include "modest/style/map.h"
#include "modest/style/map_resource.h"

void modest_style_map_collate_declaration(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
    if(thr_dec->entry == NULL || thr_dec->entry->type >= MyCSS_PROPERTY_TYPE_LAST_ENTRY)
        return;
    
    modest_style_map_static_collate_declaration[ thr_dec->entry->type ](node, thr_dec);
}

void modest_style_map_collate_declaration_undef(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
    
}

void modest_style_map_collate_declaration_height(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
    modest_node_t *m_node = (modest_node_t*)node->data;
    
    if(modest_finder_thread_spec_is_up(&thr_dec->raw_spec, &m_node->stylesheet->height.raw.spec)) {
        m_node->stylesheet->height.raw.declaration = thr_dec->entry;
        m_node->stylesheet->height.raw.spec = thr_dec->raw_spec;
    }
}

void modest_style_map_collate_declaration_width(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
    modest_node_t *m_node = (modest_node_t*)node->data;
    
    if(modest_finder_thread_spec_is_up(&thr_dec->raw_spec, &m_node->stylesheet->width.raw.spec)) {
        m_node->stylesheet->width.raw.declaration = thr_dec->entry;
        m_node->stylesheet->width.raw.spec = thr_dec->raw_spec;
    }
}

/* not yet */
void modest_style_map_collate_declaration_align_content(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_align_items(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_align_self(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_animation(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_animation_delay(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_animation_direction(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_animation_duration(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_animation_fill_mode(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_animation_iteration_count(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_animation_name(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_animation_play_state(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_animation_timing_function(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_appearance(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_backface_visibility(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_background(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_background_attachment(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_background_clip(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_background_color(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_background_image(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_background_origin(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_background_position(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_background_repeat(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_background_size(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_bookmark_label(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_bookmark_level(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_bookmark_state(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_bottom(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_bottom_color(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_bottom_left_radius(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_bottom_right_radius(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_bottom_style(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_bottom_width(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_collapse(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_color(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_image(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_image_outset(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_image_repeat(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_image_slice(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_image_width(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_left(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_left_color(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_left_style(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_left_width(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_radius(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_right(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_right_color(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_right_style(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_right_width(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_spacing(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_style(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_top(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_top_color(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_top_left_radius(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_top_right_radius(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_top_style(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_top_width(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_border_width(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_bottom(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_box_decoration_break(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_box_shadow(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_box_sizing(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_box_suppress(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_break_after(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_break_before(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_break_inside(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_caption_side(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_caret(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_caret_color(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_caret_shape(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_clear(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_clear_after(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_color(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_color_adjust(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_color_interpolation(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_color_interpolation_filters(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_color_rendering(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_column_count(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_column_fill(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_column_gap(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_column_rule(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_column_rule_color(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_column_rule_style(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_column_rule_width(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_column_span(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_column_width(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_columns(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_contain(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_content(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_continue(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_counter_increment(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_cue(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_cue_after(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_cue_before(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_cursor(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_direction(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_display(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_empty_cells(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_fill(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_fill_opacity(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_fill_rule(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_flex(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_flex_basis(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_flex_direction(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_flex_flow(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_flex_grow(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_flex_shrink(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_flex_wrap(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_float(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_float_displace(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_font(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_font_family(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_font_feature_settings(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_font_kerning(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_font_language_override(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_font_size(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_font_size_adjust(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_font_stretch(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_font_style(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_font_synthesis(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_font_variant(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_font_variant_alternates(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_font_variant_caps(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_font_variant_east_asian(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_font_variant_ligatures(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_font_variant_numeric(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_font_variant_position(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_font_weight(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_glyph_orientation_vertical(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_hanging_punctuation(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_hyphens(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_image_rendering(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_indent_edge_reset(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_inline_size_step(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_justify_content(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_left(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_letter_spacing(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_line_break(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_line_height(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_line_height_step(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_list_style(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_list_style_image(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_list_style_position(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_list_style_type(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_margin(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_margin_bottom(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_margin_left(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_margin_right(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_margin_top(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_marker(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_marker_end(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_marker_mid(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_marker_side(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_marker_start(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_max_height(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_max_lines(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_max_width(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_min_height(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_min_width(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_nav_down(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_nav_left(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_nav_right(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_nav_up(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_offset_after(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_offset_before(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_offset_end(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_offset_start(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_opacity(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_order(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_orphans(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_outline(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_outline_color(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_outline_offset(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_outline_style(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_outline_width(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_overflow(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_overflow_wrap(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_overflow_x(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_overflow_y(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_padding(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_padding_bottom(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_padding_left(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_padding_right(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_padding_top(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_pause(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_pause_after(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_pause_before(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_perspective(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_perspective_origin(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_position(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_presentation_level(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_quotes(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_region_fragment(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_resize(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_rest(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_rest_after(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_rest_before(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_right(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_ruby_align(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_ruby_merge(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_ruby_position(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_scroll_padding(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_scroll_snap_align(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_scroll_snap_margin(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_scroll_snap_stop(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_scroll_snap_type(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_shape_image_threshold(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_shape_margin(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_shape_outside(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_shape_rendering(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_speak(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_speak_as(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_string_set(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_stroke(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_stroke_dasharray(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_stroke_dashoffset(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_stroke_linecap(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_stroke_linejoin(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_stroke_miterlimit(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_stroke_opacity(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_stroke_width(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_tab_size(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_table_layout(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_text_align(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_text_align_all(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_text_align_last(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_text_combine_upright(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_text_decoration(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_text_decoration_color(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_text_decoration_line(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_text_decoration_skip(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_text_decoration_styl(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_text_emphasis(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_text_emphasis_color(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_text_emphasis_position(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_text_emphasis_style(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_text_indent(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_text_justify(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_text_orientation(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_text_overflow(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_text_rendering(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_text_shadow(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_text_size_adjust(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_text_transform(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_text_underline_position(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_top(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_touch_action(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_transform(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_transform_box(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_transform_origin(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_transform_style(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_transition(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_transition_delay(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_transition_duration(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_transition_property(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_transition_timing_function(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_unicode_bidi(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_user_select(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_vertical_align(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_visibility(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_voice_balance(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_voice_duration(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_voice_family(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_voice_pitch(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_voice_range(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_voice_rate(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_voice_stress(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_voice_volume(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_white_space(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_widows(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_will_change(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_word_break(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_word_spacing(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_word_wrap(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_wrap_flow(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_wrap_through(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_writing_mode(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}

void modest_style_map_collate_declaration_z_index(myhtml_tree_node_t* node, modest_finder_thread_declaration_t* thr_dec)
{
}


