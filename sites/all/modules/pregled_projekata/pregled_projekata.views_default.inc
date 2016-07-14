<?php
/**
 * @file
 * pregled_projekata.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pregled_projekata_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'pregled_projekata';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Pregled Projekata';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Slika */
  $handler->display->display_options['fields']['field_slika']['id'] = 'field_slika';
  $handler->display->display_options['fields']['field_slika']['table'] = 'field_data_field_slika';
  $handler->display->display_options['fields']['field_slika']['field'] = 'field_slika';
  $handler->display->display_options['fields']['field_slika']['label'] = '';
  $handler->display->display_options['fields']['field_slika']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slika']['alter']['text'] = '<div class="projekti"><div class="naslov">[title]</div><div class="slika">[field_slika]</div></div>';
  $handler->display->display_options['fields']['field_slika']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slika']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slika']['settings'] = array(
    'image_style' => 'large',
    'image_link' => 'content',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'projekti' => 'projekti',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['pregled_projekata'] = $view;

  return $export;
}
