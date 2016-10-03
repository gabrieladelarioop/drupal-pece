<?php
/**
 * @file
 * pece_essay.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function pece_essay_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:pece_essay:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'pece_essay';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'radix_bryant_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '72f21b63-b09a-41d9-92c4-07b845d38d1f';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-585b6ced-0f96-4825-b9d6-f5b7191a3ce8';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '585b6ced-0f96-4825-b9d6-f5b7191a3ce8';
  $display->content['new-585b6ced-0f96-4825-b9d6-f5b7191a3ce8'] = $pane;
  $display->panels['contentmain'][0] = 'new-585b6ced-0f96-4825-b9d6-f5b7191a3ce8';
  $pane = new stdClass();
  $pane->pid = 'new-6c085e0a-1161-4d4b-b59c-2660d94154ec';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_pece_license';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'creative_commons_small_image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '6c085e0a-1161-4d4b-b59c-2660d94154ec';
  $display->content['new-6c085e0a-1161-4d4b-b59c-2660d94154ec'] = $pane;
  $display->panels['contentmain'][1] = 'new-6c085e0a-1161-4d4b-b59c-2660d94154ec';
  $pane = new stdClass();
  $pane->pid = 'new-22a8c00a-9a3b-459e-ba15-ea7a1882f925';
  $pane->panel = 'contentmain';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'build_mode' => 'full',
    'identifier' => '',
    'link' => 1,
    'context' => 'panelizer',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '22a8c00a-9a3b-459e-ba15-ea7a1882f925';
  $display->content['new-22a8c00a-9a3b-459e-ba15-ea7a1882f925'] = $pane;
  $display->panels['contentmain'][2] = 'new-22a8c00a-9a3b-459e-ba15-ea7a1882f925';
  $pane = new stdClass();
  $pane->pid = 'new-beb09bec-1d62-4b84-878b-848a2aa652ac';
  $pane->panel = 'contentmain';
  $pane->type = 'node_comment_wrapper';
  $pane->subtype = 'node_comment_wrapper';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'mode' => '1',
    'comments_per_page' => '50',
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'beb09bec-1d62-4b84-878b-848a2aa652ac';
  $display->content['new-beb09bec-1d62-4b84-878b-848a2aa652ac'] = $pane;
  $display->panels['contentmain'][3] = 'new-beb09bec-1d62-4b84-878b-848a2aa652ac';
  $pane = new stdClass();
  $pane->pid = 'new-b1542e6f-c461-4c89-b1f5-33ae9e683537';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_thumbnail';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'file_rendered',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'file_view_mode' => 'default',
    ),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b1542e6f-c461-4c89-b1f5-33ae9e683537';
  $display->content['new-b1542e6f-c461-4c89-b1f5-33ae9e683537'] = $pane;
  $display->panels['sidebar'][0] = 'new-b1542e6f-c461-4c89-b1f5-33ae9e683537';
  $pane = new stdClass();
  $pane->pid = 'new-183fc3bf-ff65-4b24-a565-769b4c316a62';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_pece_contributors';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'og_list_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '183fc3bf-ff65-4b24-a565-769b4c316a62';
  $display->content['new-183fc3bf-ff65-4b24-a565-769b4c316a62'] = $pane;
  $display->panels['sidebar'][1] = 'new-183fc3bf-ff65-4b24-a565-769b4c316a62';
  $pane = new stdClass();
  $pane->pid = 'new-646183a2-a91b-4ae8-8015-66e2c55c9648';
  $pane->panel = 'sidebar';
  $pane->type = 'node_created';
  $pane->subtype = 'node_created';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'format' => 'panopoly_day',
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '646183a2-a91b-4ae8-8015-66e2c55c9648';
  $display->content['new-646183a2-a91b-4ae8-8015-66e2c55c9648'] = $pane;
  $display->panels['sidebar'][2] = 'new-646183a2-a91b-4ae8-8015-66e2c55c9648';
  $pane = new stdClass();
  $pane->pid = 'new-be50b815-c1de-4484-a8a8-f6d6e6e632f1';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:og_group_ref';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'entityreference_label',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => 0,
    ),
    'context' => array(),
    'override_title' => 1,
    'override_title_text' => 'Group Audience',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'be50b815-c1de-4484-a8a8-f6d6e6e632f1';
  $display->content['new-be50b815-c1de-4484-a8a8-f6d6e6e632f1'] = $pane;
  $display->panels['sidebar'][3] = 'new-be50b815-c1de-4484-a8a8-f6d6e6e632f1';
  $pane = new stdClass();
  $pane->pid = 'new-40e19591-cf88-4d25-9830-0443bfd0b68d';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_pece_tags';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '40e19591-cf88-4d25-9830-0443bfd0b68d';
  $display->content['new-40e19591-cf88-4d25-9830-0443bfd0b68d'] = $pane;
  $display->panels['sidebar'][4] = 'new-40e19591-cf88-4d25-9830-0443bfd0b68d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:pece_essay:default'] = $panelizer;

  return $export;
}